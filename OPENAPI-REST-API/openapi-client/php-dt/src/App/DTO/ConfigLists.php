<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * All available configuration options (CPU, memory, storage, bandwidth, OS, control panel, RAID) for building a dedicated server order.
 */
class ConfigLists
{
    #[DTA\Data(field: "cpu_li", nullable: true)]
    #[DTA\Strategy("Object", ["type" => ::class])]
    #[DTA\Validator("TypeCompliant", ["type" => ::class])]
    public array|null $cpu_li = null;

    #[DTA\Data(field: "memory_li", nullable: true)]
    #[DTA\Strategy("Object", ["type" => ::class])]
    #[DTA\Validator("TypeCompliant", ["type" => ::class])]
    public array|null $memory_li = null;

    #[DTA\Data(field: "hd_li", nullable: true)]
    #[DTA\Strategy("Object", ["type" => ::class])]
    #[DTA\Validator("TypeCompliant", ["type" => ::class])]
    public array|null $hd_li = null;

    #[DTA\Data(field: "bandwidth_li", nullable: true)]
    #[DTA\Strategy("Object", ["type" => ::class])]
    #[DTA\Validator("TypeCompliant", ["type" => ::class])]
    public array|null $bandwidth_li = null;

    #[DTA\Data(field: "ips_li", nullable: true)]
    #[DTA\Strategy("Object", ["type" => ::class])]
    #[DTA\Validator("TypeCompliant", ["type" => ::class])]
    public array|null $ips_li = null;

    #[DTA\Data(field: "os_li", nullable: true)]
    #[DTA\Strategy("Object", ["type" => ::class])]
    #[DTA\Validator("TypeCompliant", ["type" => ::class])]
    public array|null $os_li = null;

    #[DTA\Data(field: "cp_li", nullable: true)]
    #[DTA\Strategy("Object", ["type" => ::class])]
    #[DTA\Validator("TypeCompliant", ["type" => ::class])]
    public array|null $cp_li = null;

    #[DTA\Data(field: "raid_li", nullable: true)]
    #[DTA\Strategy("Object", ["type" => ::class])]
    #[DTA\Validator("TypeCompliant", ["type" => ::class])]
    public array|null $raid_li = null;

}
