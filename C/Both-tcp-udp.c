#include <stdio.h>
#include <winsock2.h>
#include <string.h>

#pragma comment(lib,"ws2_32.lib")

#define PORT_TCP 8080
#define PORT_UDP 8081
#define BUFFER 1024

void tcp_demo();
void udp_demo();

int main() {
    int choice;

    printf("1. TCP Echo Server\n");
    printf("2. UDP Echo Server\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if(choice == 1)
        tcp_demo();
    else if(choice == 2)
        udp_demo();
    else
        printf("Invalid choice\n");

    return 0;
}

void tcp_demo() {
    WSADATA wsa;
    SOCKET server_socket, client_socket;
    struct sockaddr_in server;
    char buffer[BUFFER] = "Hello TCP";

    WSAStartup(MAKEWORD(2,2), &wsa);

    // Create server socket
    server_socket = socket(AF_INET, SOCK_STREAM, 0);

    server.sin_family = AF_INET;
    server.sin_addr.s_addr = inet_addr("127.0.0.1");
    server.sin_port = htons(PORT_TCP);

    bind(server_socket, (struct sockaddr*)&server, sizeof(server));
    listen(server_socket, 1);

    printf("TCP Server Listening on port %d...\n", PORT_TCP);

    // Create client socket
    client_socket = socket(AF_INET, SOCK_STREAM, 0);
    connect(client_socket, (struct sockaddr*)&server, sizeof(server));

    // Accept connection on server
    SOCKET new_socket;
    int c = sizeof(server);
    new_socket = accept(server_socket, (struct sockaddr*)&server, &c);

    // Client sends message
    send(client_socket, buffer, strlen(buffer), 0);

    // Server receives
    recv(new_socket, buffer, BUFFER, 0);
    printf("Client: %s\n", buffer);

    closesocket(client_socket);
    closesocket(new_socket);
    closesocket(server_socket);
    WSACleanup();
}

void udp_demo() {
    WSADATA wsa;
    SOCKET server_socket, client_socket;
    struct sockaddr_in server, client;
    char buffer[BUFFER] = "Hello UDP";
    int len = sizeof(server);

    WSAStartup(MAKEWORD(2,2), &wsa);

    // Server socket
    server_socket = socket(AF_INET, SOCK_DGRAM, 0);

    server.sin_family = AF_INET;
    server.sin_addr.s_addr = inet_addr("127.0.0.1");
    server.sin_port = htons(PORT_UDP);

    bind(server_socket, (struct sockaddr*)&server, sizeof(server));

    printf("UDP Server Listening on port %d...\n", PORT_UDP);

    // Client socket
    client_socket = socket(AF_INET, SOCK_DGRAM, 0);

    // Client sends message
    sendto(client_socket, buffer, strlen(buffer), 0,
           (struct sockaddr*)&server, len);

    // Server receives
    recvfrom(server_socket, buffer, BUFFER, 0,
             (struct sockaddr*)&client, &len);

    printf("Client: %s\n", buffer);

    closesocket(client_socket);
    closesocket(server_socket);
    WSACleanup();
}