#include "test_data.h"

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

uint8_t m2[34] = {
    0x00, 0x00, 0xde, 0x9e, 0xdb, 0x7d, 0x7b, 0x7d,
    0xc1, 0xb4, 0xd3, 0x5b, 0x61, 0xc2, 0xec, 0xe4,
    0x35, 0x37, 0x3f, 0x83, 0x43, 0xc8, 0x5b, 0x78,
    0x67, 0x4d, 0xad, 0xfc, 0x7e, 0x14, 0x6f, 0x88,
    0x2b, 0x4f
};

uint8_t m3[114] = {
    0x00, 0x00, 0xaf, 0x27, 0xc6, 0x6e, 0xc8, 0x4b,
    0x44, 0x2c, 0xb6, 0x72, 0x4c, 0xfd, 0xcf, 0xcf,
    0x6b, 0x9f, 0xc2, 0x2f, 0x56, 0x27, 0x5b, 0x45,
    0xd3, 0xbc, 0x7a, 0x9a, 0x13, 0x13, 0x1d, 0xd1,
    0x16, 0x5a, 0xd0, 0xa4, 0x92, 0x9d, 0xce, 0x1a,
    0x1e, 0x1c, 0x7f, 0x91, 0xc8, 0x7b, 0x59, 0xbc,
    0xe2, 0x89, 0x2f, 0xe7, 0x62, 0x49, 0x7f, 0x1a,
    0xf9, 0xbc, 0x3a, 0x70, 0x4d, 0xbf, 0x06, 0x41,
    0xd1, 0xea, 0x12, 0xf6, 0x94, 0xff, 0x32, 0x3d,
    0x61, 0x02, 0x01, 0x85, 0x65, 0x69, 0x06, 0x5a,
    0x69, 0xc5, 0x5e, 0xf1, 0x8e, 0x4f, 0x3d, 0x96,
    0xa1, 0xb2, 0xcb, 0x5a, 0x93, 0xd2, 0x58, 0x39,
    0x2b, 0x1c, 0x8c, 0x56, 0x1b, 0xa8, 0x40, 0xbf,
    0x27, 0x40, 0xc1, 0xc6, 0x24, 0x13, 0xed, 0x53,
    0x89, 0x2b
};
