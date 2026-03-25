const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}vps_id`,
                label: `VPS ID - [${labelPrefix}vps_id]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}vps_name`,
                label: `VPS name - [${labelPrefix}vps_name]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}vps_ip`,
                label: `IP address of the VPS - [${labelPrefix}vps_ip]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}vps_type`,
                label: `VPS type - [${labelPrefix}vps_type]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}vps_hdsize`,
                label: `Hard drive size - [${labelPrefix}vps_hdsize]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}vps_hdfree`,
                label: `Free hard drive space - [${labelPrefix}vps_hdfree]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}vps_bits`,
                label: `Bits - [${labelPrefix}vps_bits]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}vps_load`,
                label: `CPU load - [${labelPrefix}vps_load]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}vps_ram`,
                label: `RAM - [${labelPrefix}vps_ram]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}vps_cpu_model`,
                label: `CPU model - [${labelPrefix}vps_cpu_model]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}vps_cpu_mhz`,
                label: `CPU frequency in MHz - [${labelPrefix}vps_cpu_mhz]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}vps_location`,
                label: `Location of the VPS - [${labelPrefix}vps_location]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}vps_last_update`,
                label: `Last update date - [${labelPrefix}vps_last_update]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}vps_raid_building`,
                label: `RAID building status - [${labelPrefix}vps_raid_building]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}vps_kernel`,
                label: `Kernel version - [${labelPrefix}vps_kernel]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}vps_available`,
                label: `Available - [${labelPrefix}vps_available]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}vps_cores`,
                label: `Number of CPU cores - [${labelPrefix}vps_cores]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}vps_iowait`,
                label: `I/O wait - [${labelPrefix}vps_iowait]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}vps_raid_status`,
                label: `RAID status - [${labelPrefix}vps_raid_status]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}vps_mounts`,
                label: `Mounts - [${labelPrefix}vps_mounts]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}vps_server_max`,
                label: `Maximum number of servers - [${labelPrefix}vps_server_max]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}vps_server_max_slices`,
                label: `Maximum number of server slices - [${labelPrefix}vps_server_max_slices]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}vps_drive_type`,
                label: `Drive type - [${labelPrefix}vps_drive_type]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}vps_order`,
                label: `Order number - [${labelPrefix}vps_order]`,
                type: 'string',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'vps_id': bundle.inputData?.[`${keyPrefix}vps_id`],
            'vps_name': bundle.inputData?.[`${keyPrefix}vps_name`],
            'vps_ip': bundle.inputData?.[`${keyPrefix}vps_ip`],
            'vps_type': bundle.inputData?.[`${keyPrefix}vps_type`],
            'vps_hdsize': bundle.inputData?.[`${keyPrefix}vps_hdsize`],
            'vps_hdfree': bundle.inputData?.[`${keyPrefix}vps_hdfree`],
            'vps_bits': bundle.inputData?.[`${keyPrefix}vps_bits`],
            'vps_load': bundle.inputData?.[`${keyPrefix}vps_load`],
            'vps_ram': bundle.inputData?.[`${keyPrefix}vps_ram`],
            'vps_cpu_model': bundle.inputData?.[`${keyPrefix}vps_cpu_model`],
            'vps_cpu_mhz': bundle.inputData?.[`${keyPrefix}vps_cpu_mhz`],
            'vps_location': bundle.inputData?.[`${keyPrefix}vps_location`],
            'vps_last_update': bundle.inputData?.[`${keyPrefix}vps_last_update`],
            'vps_raid_building': bundle.inputData?.[`${keyPrefix}vps_raid_building`],
            'vps_kernel': bundle.inputData?.[`${keyPrefix}vps_kernel`],
            'vps_available': bundle.inputData?.[`${keyPrefix}vps_available`],
            'vps_cores': bundle.inputData?.[`${keyPrefix}vps_cores`],
            'vps_iowait': bundle.inputData?.[`${keyPrefix}vps_iowait`],
            'vps_raid_status': bundle.inputData?.[`${keyPrefix}vps_raid_status`],
            'vps_mounts': bundle.inputData?.[`${keyPrefix}vps_mounts`],
            'vps_server_max': bundle.inputData?.[`${keyPrefix}vps_server_max`],
            'vps_server_max_slices': bundle.inputData?.[`${keyPrefix}vps_server_max_slices`],
            'vps_drive_type': bundle.inputData?.[`${keyPrefix}vps_drive_type`],
            'vps_order': bundle.inputData?.[`${keyPrefix}vps_order`],
        }
    },
}
