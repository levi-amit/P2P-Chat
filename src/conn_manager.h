

#define CONNDB_SIZE 16
#define CHANNEL_SIZE 16

#define CHANNEL_NAME_SIZE 16

#define SERVER_PORT 58008


typedef enum ConnectionType
{
    TCP
}
ConnectionType;

typedef struct Connection
{
    ConnectionType conn_type;
    void* conn;
}
Connection;

typedef struct TCPConnection
{
    // TYPES ARE PLACEHODERS
    int socket;
    int src_ip;
    int dst_ip;
    int src_port;
    int dst_port;
}
TCPConnection;


typedef struct Channel {
    char name[CHANNEL_NAME_SIZE];
    // Channel connection list currently array, should be somthing better
    Connection* connections[CHANNEL_SIZE];
}
Channel;


// DBs are currently arrays but should be hash tables or something idk
extern Connection* connDB [];
extern Channel* channelDB [];
