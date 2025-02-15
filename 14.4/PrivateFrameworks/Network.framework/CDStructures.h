//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct netagent {
    unsigned char _field1[16];
    char _field2[32];
    char _field3[32];
    char _field4[128];
    unsigned int _field5;
    unsigned int _field6;
    unsigned char _field7[0];
};

struct netcore_stats_data_usage_snapshot {
    unsigned long long bytes_in;
    unsigned long long bytes_out;
    unsigned long long multipath_bytes_in_cell;
    unsigned long long multipath_bytes_out_cell;
    unsigned long long multipath_bytes_in_wifi;
    unsigned long long multipath_bytes_out_wifi;
    unsigned long long multipath_bytes_in_initial;
    unsigned long long multipath_bytes_out_initial;
};

struct netcore_stats_network_event {
    int network_event_type;
    unsigned int time_to_network_event_msecs;
};

struct netcore_stats_tcp_cell_fallback_report {
    struct netcore_stats_network_event network_events[20];
    struct netcore_stats_data_usage_snapshot data_usage_snapshots_at_network_events[20];
    int deny_reason;
    unsigned int network_event_count;
    unsigned int data_usage_snapshots_at_network_events_count;
    unsigned int fallback_timer_msecs;
    _Bool fellback;
    unsigned char __pad[7];
};

struct netcore_stats_tcp_report {
    union {
        struct {
            struct netcore_stats_tcp_statistics_report statistics_report;
            struct netcore_stats_tcp_cell_fallback_report fallback_report;
            struct netcore_stats_tcp_statistics_report connection_attempts[8];
            int report_reason;
            unsigned int ip_address_attempt_count;
        } legacy;
        struct nw_connection_report_s nw_connection_report;
    } u;
    _Bool delegated;
    _Bool legacy;
    unsigned char __pad[6];
};

struct netcore_stats_tcp_statistics_report {
    unsigned long long bytes_in;
    unsigned long long bytes_out;
    unsigned long long bytes_duplicate;
    unsigned long long bytes_ooo;
    unsigned long long bytes_retransmitted;
    unsigned long long packets_in;
    unsigned long long packets_out;
    unsigned long long packets_duplicate;
    unsigned long long packets_ooo;
    unsigned long long packets_retransmitted;
    unsigned long long multipath_bytes_in_cell;
    unsigned long long multipath_bytes_out_cell;
    unsigned long long multipath_bytes_in_wifi;
    unsigned long long multipath_bytes_out_wifi;
    unsigned long long multipath_bytes_in_initial;
    unsigned long long multipath_bytes_out_initial;
    unsigned int time_to_dns_resolved_msecs;
    unsigned int time_to_dns_start_msecs;
    unsigned int dns_resolved_time_msecs;
    unsigned int time_to_connection_start_msecs;
    unsigned int time_to_connection_establishment_msecs;
    unsigned int connection_establishment_time_msecs;
    unsigned int flow_duration_msecs;
    unsigned int traffic_class;
    unsigned int current_rtt_msecs;
    unsigned int smoothed_rtt_msecs;
    unsigned int best_rtt_msecs;
    unsigned int rtt_variance;
    unsigned int syn_retransmission_count;
    unsigned int better_route_event_count;
    unsigned int connection_reuse_count;
    unsigned int app_reporting_data_stall_count;
    unsigned int app_data_stall_timer_msecs;
    int interface_type;
    int connected_interface_type;
    int multipath_service_type;
    unsigned int dns_answers_cached:1;
    unsigned int connected:1;
    unsigned int cellular_fallback:1;
    unsigned int cellular_rrc_connected:1;
    unsigned int kernel_reported_stalls:1;
    unsigned int kernel_reporting_connection_stalled:1;
    unsigned int kernel_reporting_read_stalled:1;
    unsigned int kernel_reporting_write_stalled:1;
    unsigned int tcp_fast_open:1;
    unsigned int first_party:1;
    unsigned int tls13_configured:1;
    unsigned int __pad_bits:5;
    unsigned char __pad[6];
};

struct nw_activity_epilogue_report_s {
    unsigned long long duration_msecs;
    struct nw_activity_report_s activity;
    unsigned int fragments_quenched;
    int underlying_error_domain;
    int underlying_error_code;
    int completion_reason;
    unsigned char __pad[0];
};

struct nw_activity_report_s {
    unsigned long long investigation_identifier;
    unsigned int domain;
    unsigned int label;
    unsigned char activity_uuid[16];
    unsigned char parent_activity_uuid[16];
    char bundle_id[256];
    unsigned int retry:1;
    unsigned int __pad_bits:7;
    unsigned char __pad[7];
};

struct nw_connection_protocol_establishment_report_s {
    char protocol_name[32];
    unsigned long long handshake_milliseconds;
    unsigned long long handshake_rtt_milliseconds;
    int protocol_index;
    unsigned char __pad[4];
};

struct nw_connection_report_s {
    unsigned long long bytes_in;
    unsigned long long bytes_out;
    unsigned long long bytes_duplicate;
    unsigned long long bytes_ooo;
    unsigned long long bytes_retransmitted;
    unsigned long long packets_in;
    unsigned long long packets_out;
    unsigned long long multipath_bytes_in_cell;
    unsigned long long multipath_bytes_out_cell;
    unsigned long long multipath_bytes_in_wifi;
    unsigned long long multipath_bytes_out_wifi;
    unsigned long long multipath_bytes_in_initial;
    unsigned long long multipath_bytes_out_initial;
    unsigned int current_rtt_msecs;
    unsigned int smoothed_rtt_msecs;
    unsigned int best_rtt_msecs;
    unsigned int rtt_variance;
    unsigned int syn_retransmission_count;
    unsigned int used_proxy_type;
    unsigned int traffic_class;
    unsigned int path_trigger_milliseconds;
    unsigned int resolution_milliseconds;
    unsigned int proxy_milliseconds;
    unsigned int flow_connect_milliseconds;
    unsigned int tls_milliseconds;
    unsigned int flow_duration_milliseconds;
    unsigned int ipv4_address_count;
    unsigned int ipv6_address_count;
    unsigned int connected_address_index;
    unsigned int connection_reuse_count;
    unsigned int data_stall_count;
    unsigned int ipv4_dns_server_count;
    unsigned int ipv6_dns_server_count;
    unsigned int seconds_since_interface_change;
    unsigned int transport_protocol;
    unsigned int dns_protocol;
    unsigned int connection_report_reason;
    int failure_reason;
    int connected_interface_type;
    int multipath_service_type;
    int connection_mode;
    int apple_host;
    int apple_app;
    int dns_provider;
    int tls_version;
    int stack_level;
    unsigned char first_address_family;
    unsigned char connected_address_family;
    unsigned char connection_uuid[16];
    unsigned char parent_uuid[16];
    unsigned char activities[50][16];
    char bundle_id[256];
    char effective_bundle_id[256];
    unsigned char __pad_bytes[2];
    struct nw_connection_protocol_establishment_report_s protocol_establishment_reports[10];
    unsigned int triggered_path:1;
    unsigned int system_proxy_configured:1;
    unsigned int custom_proxy_configured:1;
    unsigned int fallback_eligible:1;
    unsigned int weak_fallback:1;
    unsigned int used_fallback:1;
    unsigned int resolution_required:1;
    unsigned int tls_configured:1;
    unsigned int tls13_configured:1;
    unsigned int tfo_configured:1;
    unsigned int multipath_configured:1;
    unsigned int connected:1;
    unsigned int tls_succeeded:1;
    unsigned int synthesized_ipv6_address:1;
    unsigned int synthesized_extra_ipv6_address:1;
    unsigned int ipv4_available:1;
    unsigned int ipv6_available:1;
    unsigned int used_tfo:1;
    unsigned int tls_version_timeout:1;
    unsigned int first_party:1;
    unsigned int is_daemon:1;
    unsigned int tls_handshake_timed_out:1;
    unsigned int is_path_expensive:1;
    unsigned int is_path_constrained:1;
    unsigned int prohibits_expensive:1;
    unsigned int prohibits_constrained:1;
    unsigned int svcb_requested:1;
    unsigned int svcb_received:1;
    unsigned int svcb_dohuri:1;
    unsigned int is_probe:1;
    unsigned int __pad_bits:2;
    unsigned char __pad[4];
};

struct nw_protocol {
    unsigned char _field1[16];
    struct nw_protocol_identifier *_field2;
    struct nw_protocol_callbacks *_field3;
    struct nw_protocol *_field4;
    void *_field5;
    struct nw_protocol *_field6;
    void *_field7;
};

struct nw_protocol_callbacks;

struct nw_protocol_identifier {
    char _field1[32];
    int _field2;
    int _field3;
};

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

struct sockaddr {
    unsigned char _field1;
    unsigned char _field2;
    char _field3[14];
};

struct tcp_connection_info {
    unsigned char _field1;
    unsigned char _field2;
    unsigned char _field3;
    unsigned char _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
    unsigned int _field8;
    unsigned int _field9;
    unsigned int _field10;
    unsigned int _field11;
    unsigned int _field12;
    unsigned int _field13;
    unsigned int _field14;
    unsigned int _field15;
    unsigned int _field16;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :17;
    unsigned long long _field17;
    unsigned long long _field18;
    unsigned long long _field19;
    unsigned long long _field20;
    unsigned long long _field21;
    unsigned long long _field22;
    unsigned long long _field23;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned int _field1[8];
} CDStruct_6ad76789;

typedef struct {
    int *list;
    unsigned long long count;
    unsigned long long size;
} CDStruct_95bda58d;

