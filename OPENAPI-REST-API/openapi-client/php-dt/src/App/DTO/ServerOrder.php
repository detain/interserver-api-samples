<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Object representing a server order.
 */
class ServerOrder
{
    #[DTA\Data(field: "form_values", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\ServerOrderFormValues::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\ServerOrderFormValues::class])]
    public \App\DTO\ServerOrderFormValues|null $form_values = null;

    #[DTA\Data(field: "config_ids", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\ServerOrderConfigIds::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\ServerOrderConfigIds::class])]
    public \App\DTO\ServerOrderConfigIds|null $config_ids = null;

    /**
     * Number of CPUs for the server order.
     */
    #[DTA\Data(field: "cpu", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $cpu = null;

    #[DTA\Data(field: "field_label", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\ServerOrderFieldLabels::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\ServerOrderFieldLabels::class])]
    public \App\DTO\ServerOrderFieldLabels|null $field_label = null;

    #[DTA\Data(field: "cpu_li", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\ServerOrderCpuLi::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\ServerOrderCpuLi::class])]
    public \App\DTO\ServerOrderCpuLi|null $cpu_li = null;

    #[DTA\Data(field: "memory_li", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\ServerOrderMemoryLi::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\ServerOrderMemoryLi::class])]
    public \App\DTO\ServerOrderMemoryLi|null $memory_li = null;

    #[DTA\Data(field: "bandwidth_li", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\ServerOrderBandwidthLi::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\ServerOrderBandwidthLi::class])]
    public \App\DTO\ServerOrderBandwidthLi|null $bandwidth_li = null;

    #[DTA\Data(field: "ips_li", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\ServerOrderIpsLi::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\ServerOrderIpsLi::class])]
    public \App\DTO\ServerOrderIpsLi|null $ips_li = null;

    #[DTA\Data(field: "os_li", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\ServerOrderOsLi::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\ServerOrderOsLi::class])]
    public \App\DTO\ServerOrderOsLi|null $os_li = null;

    #[DTA\Data(field: "cp_li", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\ServerOrderCpLi::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\ServerOrderCpLi::class])]
    public \App\DTO\ServerOrderCpLi|null $cp_li = null;

    /**
     * RAID options for the server order.
     */
    #[DTA\Data(field: "raid_li", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\Collection93::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\Collection93::class])]
    public \App\DTO\Collection93|null $raid_li = null;

}
