const utils = require('../utils/utils');
const AnyType = require('../models/AnyType');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}qs_id`,
                label: `Quickserver ID - [${labelPrefix}qs_id]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}qs_name`,
                label: `Quickserver name - [${labelPrefix}qs_name]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}qs_ip`,
                label: `IP address - [${labelPrefix}qs_ip]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}qs_type`,
                label: `Type - [${labelPrefix}qs_type]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}qs_hdsize`,
                label: `HDD size - [${labelPrefix}qs_hdsize]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}qs_hdfree`,
                label: `Free HDD space - [${labelPrefix}qs_hdfree]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}qs_bits`,
                label: `Bits - [${labelPrefix}qs_bits]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}qs_load`,
                label: `Load - [${labelPrefix}qs_load]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}qs_ram`,
                label: `RAM information - [${labelPrefix}qs_ram]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}qs_cpu_model`,
                label: `CPU model - [${labelPrefix}qs_cpu_model]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}qs_cpu_mhz`,
                label: `CPU frequency - [${labelPrefix}qs_cpu_mhz]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}qs_location`,
                label: `Location - [${labelPrefix}qs_location]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}qs_available`,
                label: `Available information - [${labelPrefix}qs_available]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}qs_cost`,
                label: `Cost - [${labelPrefix}qs_cost]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}qs_last_update`,
                label: `Last update date - [${labelPrefix}qs_last_update]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}qs_cores`,
                label: `Number of cores - [${labelPrefix}qs_cores]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}qs_iowait`,
                label: `I/O wait - [${labelPrefix}qs_iowait]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}qs_raid_status`,
                label: `RAID status - [${labelPrefix}qs_raid_status]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}qs_drive_type`,
                label: `Drive type - [${labelPrefix}qs_drive_type]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}qs_order`,
                label: `Order number - [${labelPrefix}qs_order]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}qs_raid_building`,
                label: `RAID building information - [${labelPrefix}qs_raid_building]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}qs_kernel`,
                label: `Kernel version - [${labelPrefix}qs_kernel]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}qs_ioping`,
                label: `IOPing information - [${labelPrefix}qs_ioping]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}qs_speed`,
                label: `Speed information - [${labelPrefix}qs_speed]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}qs_distro`,
                label: `Distribution name - [${labelPrefix}qs_distro]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}qs_distro_version`,
                label: `Distribution version - [${labelPrefix}qs_distro_version]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}qs_bytes_sec_in`,
                label: `Bytes/sec in - [${labelPrefix}qs_bytes_sec_in]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}qs_bytes_sec_out`,
                label: `Bytes/sec out - [${labelPrefix}qs_bytes_sec_out]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}qs_packets_sec_in`,
                label: `Packets/sec in - [${labelPrefix}qs_packets_sec_in]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}qs_packets_sec_out`,
                label: `Packets/sec out - [${labelPrefix}qs_packets_sec_out]`,
                type: 'string',
            },
            ....fields(`${keyPrefix}qs_last_install_time`, isInput),
            ....fields(`${keyPrefix}qs_partitions`, isInput),
            {
                key: `${keyPrefix}qs_cpu_flags`,
                label: `CPU flags - [${labelPrefix}qs_cpu_flags]`,
                type: 'string',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'qs_id': bundle.inputData?.[`${keyPrefix}qs_id`],
            'qs_name': bundle.inputData?.[`${keyPrefix}qs_name`],
            'qs_ip': bundle.inputData?.[`${keyPrefix}qs_ip`],
            'qs_type': bundle.inputData?.[`${keyPrefix}qs_type`],
            'qs_hdsize': bundle.inputData?.[`${keyPrefix}qs_hdsize`],
            'qs_hdfree': bundle.inputData?.[`${keyPrefix}qs_hdfree`],
            'qs_bits': bundle.inputData?.[`${keyPrefix}qs_bits`],
            'qs_load': bundle.inputData?.[`${keyPrefix}qs_load`],
            'qs_ram': bundle.inputData?.[`${keyPrefix}qs_ram`],
            'qs_cpu_model': bundle.inputData?.[`${keyPrefix}qs_cpu_model`],
            'qs_cpu_mhz': bundle.inputData?.[`${keyPrefix}qs_cpu_mhz`],
            'qs_location': bundle.inputData?.[`${keyPrefix}qs_location`],
            'qs_available': bundle.inputData?.[`${keyPrefix}qs_available`],
            'qs_cost': bundle.inputData?.[`${keyPrefix}qs_cost`],
            'qs_last_update': bundle.inputData?.[`${keyPrefix}qs_last_update`],
            'qs_cores': bundle.inputData?.[`${keyPrefix}qs_cores`],
            'qs_iowait': bundle.inputData?.[`${keyPrefix}qs_iowait`],
            'qs_raid_status': bundle.inputData?.[`${keyPrefix}qs_raid_status`],
            'qs_drive_type': bundle.inputData?.[`${keyPrefix}qs_drive_type`],
            'qs_order': bundle.inputData?.[`${keyPrefix}qs_order`],
            'qs_raid_building': bundle.inputData?.[`${keyPrefix}qs_raid_building`],
            'qs_kernel': bundle.inputData?.[`${keyPrefix}qs_kernel`],
            'qs_ioping': bundle.inputData?.[`${keyPrefix}qs_ioping`],
            'qs_speed': bundle.inputData?.[`${keyPrefix}qs_speed`],
            'qs_distro': bundle.inputData?.[`${keyPrefix}qs_distro`],
            'qs_distro_version': bundle.inputData?.[`${keyPrefix}qs_distro_version`],
            'qs_bytes_sec_in': bundle.inputData?.[`${keyPrefix}qs_bytes_sec_in`],
            'qs_bytes_sec_out': bundle.inputData?.[`${keyPrefix}qs_bytes_sec_out`],
            'qs_packets_sec_in': bundle.inputData?.[`${keyPrefix}qs_packets_sec_in`],
            'qs_packets_sec_out': bundle.inputData?.[`${keyPrefix}qs_packets_sec_out`],
            'qs_last_install_time': utils.removeIfEmpty(.mapping(bundle, `${keyPrefix}qs_last_install_time`)),
            'qs_partitions': utils.removeIfEmpty(.mapping(bundle, `${keyPrefix}qs_partitions`)),
            'qs_cpu_flags': bundle.inputData?.[`${keyPrefix}qs_cpu_flags`],
        }
    },
}
