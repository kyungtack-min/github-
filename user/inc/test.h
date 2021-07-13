#pragma pack(push, 1)

#define STR_TEST "test\n"

// Visual Studio, GCC 4.0 이상
// 구조체 정렬 사이즈 지정: (push, n) n: 정렬크기

typedef struct _set_type
{
    /* data */
    uint8_t channel;
    uint8_t volum;
    uint8_t onoff;
    

} set_type;

#pragma pack(pop)