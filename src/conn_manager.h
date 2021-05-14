

#define CONNDB_SIZE 10
#define CHANNEL_SIZE 10
#define SERVER_PORT 58008


typedef struct Connection
{
    unsigned int conn_id;
}
Connection;

typedef struct TCPConnection
{
    Connection conn;
    int socket;
    int src_ip;
    int dst_ip;
    int src_port;
    int dst_port;
}
TCPConnection;


typedef struct Channel {
    unsigned int channel_id;
    unsigned int conn[CHANNEL_SIZE];
} Channel;


// DBs are currently arrays but should be hash tables or smth
extern Connection* connDB [];
extern Channel* channelDB [];


// Server
