

#define CONNDB_SIZE 10
#define CHANNEL_SIZE 10


// Connection Type
typedef struct conn {
    unsigned int conn_id;
    int socket;
} conn_t;

// Channel type
typedef struct channel {
    unsigned int channel_id;
    unsigned int conn[CHANNEL_SIZE];
} channel_t;

// Connection Database - currently array of conn
conn_t conn_db[CONNDB_SIZE];

// Channel Database - currently array of channel
channel_t channel_db[CHANNEL_SIZE];

