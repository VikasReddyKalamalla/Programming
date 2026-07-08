// // // TCP Server Program (Windows - Winsock)

// // #include <winsock2.h>
// // #include <stdio.h>

// // #pragma comment(lib,"ws2_32.lib")

// // int main() {
// //     WSADATA wsa;
// //     SOCKET server_socket, client_socket;
// //     struct sockaddr_in server_addr;
// //     char buffer[100];
// //     int recv_size;

// //     // Initialize Winsock
// //     if (WSAStartup(MAKEWORD(2,2), &wsa) != 0) {
// //         printf("WSAStartup failed\n");
// //         return 1;
// //     }

// //     // Create socket
// //     server_socket = socket(AF_INET, SOCK_STREAM, 0);
// //     if (server_socket == INVALID_SOCKET) {
// //         printf("Socket creation failed\n");
// //         WSACleanup();
// //         return 1;
// //     }

// //     // Configure server address
// //     server_addr.sin_family = AF_INET;
// //     server_addr.sin_port = htons(5050);
// //     server_addr.sin_addr.s_addr = INADDR_ANY;

// //     // Bind socket
// //     if (bind(server_socket, (struct sockaddr*)&server_addr, sizeof(server_addr)) == SOCKET_ERROR) {
// //         printf("Bind failed\n");
// //         closesocket(server_socket);
// //         WSACleanup();
// //         return 1;
// //     }

// //     // Listen for incoming connections
// //     if (listen(server_socket, 1) == SOCKET_ERROR) {
// //         printf("Listen failed\n");
// //         closesocket(server_socket);
// //         WSACleanup();
// //         return 1;
// //     }

// //     printf("Server started... Waiting for client...\n");

// //     // Accept client connection
// //     client_socket = accept(server_socket, NULL, NULL);
// //     if (client_socket == INVALID_SOCKET) {
// //         printf("Accept failed\n");
// //         closesocket(server_socket);
// //         WSACleanup();
// //         return 1;
// //     }

// //     printf("Client connected!\n");

// //     // Receive data from client
// //     recv_size = recv(client_socket, buffer, sizeof(buffer) - 1, 0);
// //     if (recv_size > 0) {
// //         buffer[recv_size] = '\0';  // Null terminate string
// //         printf("Client: %s\n", buffer);

// //         // Send response back (echo)
// //         send(client_socket, buffer, recv_size, 0);
// //     } else {
// //         printf("Receive failed\n");
// //     }

// //     // Close sockets
// //     closesocket(client_socket);
// //     closesocket(server_socket);

// //     // Cleanup Winsock
// //     WSACleanup();

// //     return 0;
// // }


// // TCP Client Program (Windows - Winsock)

// #include <stdio.h>
// #include <winsock2.h>
// #include <string.h>

// #pragma comment(lib,"ws2_32.lib")

// int main() {
//     WSADATA wsa;
//     SOCKET s;
//     struct sockaddr_in server;
//     char message[1000], reply[1000];
//     int recv_size;

//     // Initialize Winsock
//     if (WSAStartup(MAKEWORD(2,2), &wsa) != 0) {
//         printf("WSAStartup failed\n");
//         return 1;
//     }

//     // Create socket
//     s = socket(AF_INET, SOCK_STREAM, 0);
//     if (s == INVALID_SOCKET) {
//         printf("Socket creation failed\n");
//         WSACleanup();
//         return 1;
//     }

//     // Server details
//     server.sin_family = AF_INET;
//     server.sin_addr.s_addr = inet_addr("127.0.0.1");
//     server.sin_port = htons(5050);

//     // Connect to server
//     if (connect(s, (struct sockaddr *)&server, sizeof(server)) < 0) {
//         printf("Connection failed\n");
//         closesocket(s);
//         WSACleanup();
//         return 1;
//     }

//     printf("Connected to server\n");

//     while (1) {
//         printf("Enter message: ");

//         // Safe input
//         fgets(message, sizeof(message), stdin);

//         // Remove newline from fgets
//         message[strcspn(message, "\n")] = '\0';

//         // Send message
//         send(s, message, strlen(message), 0);

//         // Receive reply
//         recv_size = recv(s, reply, sizeof(reply) - 1, 0);
//         if (recv_size > 0) {
//             reply[recv_size] = '\0';
//             printf("Server: %s\n", reply);
//         } else {
//             printf("Server disconnected\n");
//             break;
//         }
//     }

//     // Cleanup
//     closesocket(s);
//     WSACleanup();

//     return 0;
// }