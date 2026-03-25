const utils = require('../utils/utils');
const AnyType = require('../models/AnyType');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}server_id`,
                label: `The ID of the server. - [${labelPrefix}server_id]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}server_hostname`,
                label: `The hostname of the server. - [${labelPrefix}server_hostname]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}server_custid`,
                label: `The customer ID associated with the server. - [${labelPrefix}server_custid]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}server_type`,
                label: `The type of the server. - [${labelPrefix}server_type]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}server_currency`,
                label: `The currency used for billing. - [${labelPrefix}server_currency]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}server_order_date`,
                label: `The date when the server was ordered. - [${labelPrefix}server_order_date]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}server_invoice`,
                label: `The invoice number for the server. - [${labelPrefix}server_invoice]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}server_coupon`,
                label: `The coupon associated with the server. - [${labelPrefix}server_coupon]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}server_status`,
                label: `The status of the server. - [${labelPrefix}server_status]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}server_root`,
                label: `The root of the server. - [${labelPrefix}server_root]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}server_dedicated_tag`,
                label: `The dedicated tag of the server. - [${labelPrefix}server_dedicated_tag]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}server_custom_tag`,
                label: `The custom tag of the server. - [${labelPrefix}server_custom_tag]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}server_comment`,
                label: `Comments related to the server. - [${labelPrefix}server_comment]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}server_initial_bill`,
                label: `The initial billing amount for the server. - [${labelPrefix}server_initial_bill]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}server_hardware`,
                label: `The hardware information of the server. - [${labelPrefix}server_hardware]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}server_ips`,
                label: `The number of IPs associated with the server. - [${labelPrefix}server_ips]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}server_monthly_bill`,
                label: `The monthly billing amount for the server. - [${labelPrefix}server_monthly_bill]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}server_setup`,
                label: `The setup status of the server. - [${labelPrefix}server_setup]`,
                type: 'string',
            },
            ....fields(`${keyPrefix}server_discount`, isInput),
            {
                key: `${keyPrefix}server_rep`,
                label: `The reputation of the server. - [${labelPrefix}server_rep]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}server_date`,
                label: `The date related to the server. - [${labelPrefix}server_date]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}server_total_cost`,
                label: `The total cost of the server. - [${labelPrefix}server_total_cost]`,
                type: 'string',
            },
            ....fields(`${keyPrefix}server_location`, isInput),
            {
                key: `${keyPrefix}server_hardware_ordered`,
                label: `The ordered hardware for the server. - [${labelPrefix}server_hardware_ordered]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}server_billed`,
                label: `The billed amount for the server. - [${labelPrefix}server_billed]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}server_welcome_email`,
                label: `Indicates whether a welcome email was sent. - [${labelPrefix}server_welcome_email]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}server_dedicated_cpu`,
                label: `The number of dedicated CPUs for the server. - [${labelPrefix}server_dedicated_cpu]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}server_dedicated_memory`,
                label: `The amount of dedicated memory for the server. - [${labelPrefix}server_dedicated_memory]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}server_dedicated_hd1`,
                label: `The size of the first dedicated hard drive. - [${labelPrefix}server_dedicated_hd1]`,
                type: 'string',
            },
            ....fields(`${keyPrefix}server_dedicated_hd2`, isInput),
            {
                key: `${keyPrefix}server_dedicated_bandwidth`,
                label: `The bandwidth of the server. - [${labelPrefix}server_dedicated_bandwidth]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}server_dedicated_ips`,
                label: `The number of dedicated IPs for the server. - [${labelPrefix}server_dedicated_ips]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}server_dedicated_os`,
                label: `The operating system of the server. - [${labelPrefix}server_dedicated_os]`,
                type: 'string',
            },
            ....fields(`${keyPrefix}server_dedicated_cp`, isInput),
            {
                key: `${keyPrefix}server_dedicated_raid`,
                label: `The RAID configuration of the server. - [${labelPrefix}server_dedicated_raid]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}server_extra`,
                label: `Additional information about the server. - [${labelPrefix}server_extra]`,
                type: 'string',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'server_id': bundle.inputData?.[`${keyPrefix}server_id`],
            'server_hostname': bundle.inputData?.[`${keyPrefix}server_hostname`],
            'server_custid': bundle.inputData?.[`${keyPrefix}server_custid`],
            'server_type': bundle.inputData?.[`${keyPrefix}server_type`],
            'server_currency': bundle.inputData?.[`${keyPrefix}server_currency`],
            'server_order_date': bundle.inputData?.[`${keyPrefix}server_order_date`],
            'server_invoice': bundle.inputData?.[`${keyPrefix}server_invoice`],
            'server_coupon': bundle.inputData?.[`${keyPrefix}server_coupon`],
            'server_status': bundle.inputData?.[`${keyPrefix}server_status`],
            'server_root': bundle.inputData?.[`${keyPrefix}server_root`],
            'server_dedicated_tag': bundle.inputData?.[`${keyPrefix}server_dedicated_tag`],
            'server_custom_tag': bundle.inputData?.[`${keyPrefix}server_custom_tag`],
            'server_comment': bundle.inputData?.[`${keyPrefix}server_comment`],
            'server_initial_bill': bundle.inputData?.[`${keyPrefix}server_initial_bill`],
            'server_hardware': bundle.inputData?.[`${keyPrefix}server_hardware`],
            'server_ips': bundle.inputData?.[`${keyPrefix}server_ips`],
            'server_monthly_bill': bundle.inputData?.[`${keyPrefix}server_monthly_bill`],
            'server_setup': bundle.inputData?.[`${keyPrefix}server_setup`],
            'server_discount': utils.removeIfEmpty(.mapping(bundle, `${keyPrefix}server_discount`)),
            'server_rep': bundle.inputData?.[`${keyPrefix}server_rep`],
            'server_date': bundle.inputData?.[`${keyPrefix}server_date`],
            'server_total_cost': bundle.inputData?.[`${keyPrefix}server_total_cost`],
            'server_location': utils.removeIfEmpty(.mapping(bundle, `${keyPrefix}server_location`)),
            'server_hardware_ordered': bundle.inputData?.[`${keyPrefix}server_hardware_ordered`],
            'server_billed': bundle.inputData?.[`${keyPrefix}server_billed`],
            'server_welcome_email': bundle.inputData?.[`${keyPrefix}server_welcome_email`],
            'server_dedicated_cpu': bundle.inputData?.[`${keyPrefix}server_dedicated_cpu`],
            'server_dedicated_memory': bundle.inputData?.[`${keyPrefix}server_dedicated_memory`],
            'server_dedicated_hd1': bundle.inputData?.[`${keyPrefix}server_dedicated_hd1`],
            'server_dedicated_hd2': utils.removeIfEmpty(.mapping(bundle, `${keyPrefix}server_dedicated_hd2`)),
            'server_dedicated_bandwidth': bundle.inputData?.[`${keyPrefix}server_dedicated_bandwidth`],
            'server_dedicated_ips': bundle.inputData?.[`${keyPrefix}server_dedicated_ips`],
            'server_dedicated_os': bundle.inputData?.[`${keyPrefix}server_dedicated_os`],
            'server_dedicated_cp': utils.removeIfEmpty(.mapping(bundle, `${keyPrefix}server_dedicated_cp`)),
            'server_dedicated_raid': bundle.inputData?.[`${keyPrefix}server_dedicated_raid`],
            'server_extra': bundle.inputData?.[`${keyPrefix}server_extra`],
        }
    },
}
