#ifndef SALT_TEST_DATA
#define SALT_TEST_DATA

#include <stdint.h>

uint8_t host_ek_sec[32] = {
    0x5d, 0xab, 0x08, 0x7e, 0x62, 0x4a, 0x8a, 0x4b,
    0x79, 0xe1, 0x7f, 0x8b, 0x83, 0x80, 0x0e, 0xe6,
    0x6f, 0x3b, 0xb1, 0x29, 0x26, 0x18, 0xb6, 0xfd,
    0x1c, 0x2f, 0x8b, 0x27, 0xff, 0x88, 0xe0, 0xeb
};

uint8_t host_ek_pub[32] = {
    0xde, 0x9e, 0xdb, 0x7d, 0x7b, 0x7d, 0xc1, 0xb4,
    0xd3, 0x5b, 0x61, 0xc2, 0xec, 0xe4, 0x35, 0x37,
    0x3f, 0x83, 0x43, 0xc8, 0x5b, 0x78, 0x67, 0x4d,
    0xad, 0xfc, 0x7e, 0x14, 0x6f, 0x88, 0x2b, 0x4f
};

uint8_t host_sk_sec[64] = {
    0x7a, 0x77, 0x2f, 0xa9, 0x01, 0x4b, 0x42, 0x33,
    0x00, 0x07, 0x6a, 0x2f, 0xf6, 0x46, 0x46, 0x39,
    0x52, 0xf1, 0x41, 0xe2, 0xaa, 0x8d, 0x98, 0x26,
    0x3c, 0x69, 0x0c, 0x0d, 0x72, 0xee, 0xd5, 0x2d,
    0x07, 0xe2, 0x8d, 0x4e, 0xe3, 0x2b, 0xfd, 0xc4,
    0xb0, 0x7d, 0x41, 0xc9, 0x21, 0x93, 0xc0, 0xc2,
    0x5e, 0xe6, 0xb3, 0x09, 0x4c, 0x62, 0x96, 0xf3,
    0x73, 0x41, 0x3b, 0x37, 0x3d, 0x36, 0x16, 0x8b
};

uint8_t *host_sk_pub = &host_sk_sec[32];


uint8_t client_ek_sec[32] = {
    0x77, 0x07, 0x6d, 0x0a, 0x73, 0x18, 0xa5, 0x7d,
    0x3c, 0x16, 0xc1, 0x72, 0x51, 0xb2, 0x66, 0x45,
    0xdf, 0x4c, 0x2f, 0x87, 0xeb, 0xc0, 0x99, 0x2a,
    0xb1, 0x77, 0xfb, 0xa5, 0x1d, 0xb9, 0x2c, 0x2a
};

uint8_t client_ek_pub[32] = {
    0x85, 0x20, 0xf0, 0x09, 0x89, 0x30, 0xa7, 0x54,
    0x74, 0x8b, 0x7d, 0xdc, 0xb4, 0x3e, 0xf7, 0x5a,
    0x0d, 0xbf, 0x3a, 0x0d, 0x26, 0x38, 0x1a, 0xf4,
    0xeb, 0xa4, 0xa9, 0x8e, 0xaa, 0x9b, 0x4e, 0x6a
};

uint8_t client_sk_sec[64] = {
    0x55, 0xf4, 0xd1, 0xd1, 0x98, 0x09, 0x3c, 0x84,
    0xde, 0x9e, 0xe9, 0xa6, 0x29, 0x9e, 0x0f, 0x68,
    0x91, 0xc2, 0xe1, 0xd0, 0xb3, 0x69, 0xef, 0xb5,
    0x92, 0xa9, 0xe3, 0xf1, 0x69, 0xfb, 0x0f, 0x79,
    0x55, 0x29, 0xce, 0x8c, 0xcf, 0x68, 0xc0, 0xb8,
    0xac, 0x19, 0xd4, 0x37, 0xab, 0x0f, 0x5b, 0x32,
    0x72, 0x37, 0x82, 0x60, 0x8e, 0x93, 0xc6, 0x26,
    0x4f, 0x18, 0x4b, 0xa1, 0x52, 0xc2, 0x35, 0x7b
};

uint8_t *client_sk_pub = &client_sk_sec[32];

uint8_t common_ek[32] = {
    0x1b, 0x27, 0x55, 0x64, 0x73, 0xe9, 0x85, 0xd4,
    0x62, 0xcd, 0x51, 0x19, 0x7a, 0x9a, 0x46, 0xc7,
    0x60, 0x09, 0x54, 0x9e, 0xac, 0x64, 0x74, 0xf2,
    0x06, 0xc4, 0xee, 0x08, 0x44, 0xf6, 0x83, 0x89
};

uint8_t m1[39] = {
    0x23, 0x00, 0x00, 0x00, 0x01, 0x53, 0x32, 0x85, 
    0x20, 0xf0, 0x09, 0x89, 0x30, 0xa7, 0x54, 0x74, 
    0x8b, 0x7d, 0xdc, 0xb4, 0x3e, 0xf7, 0x5a, 0x0d, 
    0xbf, 0x3a, 0x0d, 0x26, 0x38, 0x1a, 0xf4, 0xeb, 
    0xa4, 0xa9, 0x8e, 0xaa, 0x9b, 0x4e, 0x6a  
};

uint8_t m2[37] = {
    0x21, 0x00, 0x00, 0x00, 0x12, 0xde, 0x9e, 0xdb, 
    0x7d, 0x7b, 0x7d, 0xc1, 0xb4, 0xd3, 0x5b, 0x61, 
    0xc2, 0xec, 0xe4, 0x35, 0x37, 0x3f, 0x83, 0x43, 
    0xc8, 0x5b, 0x78, 0x67, 0x4d, 0xad, 0xfc, 0x7e, 
    0x14, 0x6f, 0x88, 0x2b, 0x4f  
};

uint8_t m3[117] = {
    0x71, 0x00, 0x00, 0x00, 0x4d, 0x03, 0xac, 0x67, 
    0xc6, 0xc4, 0x71, 0xe3, 0x00, 0xd4, 0xea, 0x25, 
    0x46, 0x7e, 0x18, 0xfc, 0xd6, 0xca, 0x39, 0xe4, 
    0xf6, 0x8d, 0x05, 0x85, 0x0e, 0x57, 0x2f, 0x9b, 
    0xf5, 0x63, 0x45, 0x58, 0x4c, 0x1c, 0xc7, 0x27, 
    0x8b, 0x34, 0xea, 0x79, 0xff, 0xa3, 0xb2, 0x77, 
    0x53, 0xb7, 0xc2, 0x14, 0x5e, 0xc4, 0xcf, 0x45, 
    0x85, 0x3b, 0x8c, 0x83, 0x6c, 0x82, 0x6b, 0x23, 
    0xf8, 0xba, 0x2e, 0x40, 0x93, 0x44, 0xf8, 0x3e, 
    0x9d, 0x8b, 0x79, 0xc0, 0xe0, 0x01, 0x3a, 0x8a, 
    0x67, 0x6b, 0x21, 0x3e, 0x83, 0xcb, 0x2d, 0xb0, 
    0x97, 0x76, 0x20, 0x91, 0x0d, 0xa5, 0x3c, 0x8d, 
    0x2e, 0x6a, 0x01, 0x07, 0x33, 0x6a, 0x8d, 0x04, 
    0x56, 0x72, 0x69, 0xd5, 0x49, 0xa4, 0x21, 0xa7, 
    0xa4, 0x7c, 0x40, 0x28, 0xb9  
};

uint8_t m4[117] = {
    0x71, 0x00, 0x00, 0x00, 0xc2, 0x20, 0x57, 0x4a, 
    0xb7, 0x51, 0x55, 0x23, 0xe2, 0xa6, 0x89, 0x11, 
    0x44, 0xb8, 0x42, 0x4f, 0xb3, 0x7a, 0xd4, 0xcb, 
    0xb1, 0x97, 0x98, 0xa2, 0xaa, 0xe8, 0x38, 0x4a, 
    0xfd, 0x54, 0x73, 0xfd, 0xb5, 0x40, 0xe8, 0x95, 
    0x8d, 0xb9, 0xaf, 0x43, 0xc4, 0xe3, 0x32, 0x00, 
    0x40, 0xb4, 0xe5, 0xc0, 0xcf, 0xed, 0x91, 0xb6, 
    0xbb, 0x25, 0x8e, 0x48, 0xdd, 0x7e, 0x5e, 0x25, 
    0xd3, 0xd9, 0xf3, 0x40, 0xe2, 0x64, 0x14, 0x97, 
    0x29, 0xa9, 0x59, 0x00, 0x2c, 0x70, 0x7d, 0xd0, 
    0xcb, 0x46, 0xd7, 0x54, 0x9d, 0x26, 0x52, 0x5f, 
    0xa9, 0x7d, 0x0d, 0x69, 0xad, 0xe1, 0x89, 0x73, 
    0x72, 0x67, 0x73, 0x39, 0xcf, 0xc7, 0x80, 0xdb, 
    0x2d, 0xa3, 0x29, 0xe3, 0xa8, 0xbb, 0xc8, 0x15, 
    0x89, 0xc2, 0x9e, 0x3c, 0x80  
};

uint32_t    host_read_counter;
uint8_t     host_read_buffer[sizeof(m1)+sizeof(m4)];
uint32_t    host_write_counter;
uint8_t     host_write_buffer[sizeof(m2)+sizeof(m3)];

uint32_t    client_read_counter;
uint8_t     client_read_buffer[sizeof(m2)+sizeof(m3)];
uint32_t    client_write_counter;
uint8_t     client_write_buffer[sizeof(m1)+sizeof(m4)];

void init_salt_test_data(void)
{
    host_read_counter = 0;
    memcpy(&host_read_buffer[0], m1, sizeof(m1));
    memcpy(&host_read_buffer[sizeof(m1)], m4, sizeof(m4));
    host_write_counter = 0;
    memcpy(&host_write_buffer[0], m2, sizeof(m2));
    memcpy(&host_write_buffer[sizeof(m2)], m3, sizeof(m3));

    client_read_counter = 0;
    memcpy(&client_read_buffer[0], m2, sizeof(m2));
    memcpy(&client_read_buffer[sizeof(m2)], m3, sizeof(m3));
    client_write_counter = 0;
    memcpy(&client_write_buffer[0], m1, sizeof(m1));
    memcpy(&client_write_buffer[sizeof(m1)], m4, sizeof(m4));

}

#endif /* SALT_TEST_DATA */
