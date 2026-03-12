<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Information about the host node (hypervisor) running this VPS, including hardware specs and resource utilization.
 */
class VpsServiceMaster
{
    /**
     * VPS ID
     */
    #[DTA\Data(field: "vps_id", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $vps_id = null;

    /**
     * VPS name
     */
    #[DTA\Data(field: "vps_name", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $vps_name = null;

    /**
     * IP address of the VPS
     */
    #[DTA\Data(field: "vps_ip", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $vps_ip = null;

    /**
     * VPS type
     */
    #[DTA\Data(field: "vps_type", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $vps_type = null;

    /**
     * Hard drive size
     */
    #[DTA\Data(field: "vps_hdsize", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $vps_hdsize = null;

    /**
     * Free hard drive space
     */
    #[DTA\Data(field: "vps_hdfree", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $vps_hdfree = null;

    /**
     * Bits
     */
    #[DTA\Data(field: "vps_bits", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $vps_bits = null;

    /**
     * CPU load
     */
    #[DTA\Data(field: "vps_load", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $vps_load = null;

    /**
     * RAM
     */
    #[DTA\Data(field: "vps_ram", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $vps_ram = null;

    /**
     * CPU model
     */
    #[DTA\Data(field: "vps_cpu_model", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $vps_cpu_model = null;

    /**
     * CPU frequency in MHz
     */
    #[DTA\Data(field: "vps_cpu_mhz", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $vps_cpu_mhz = null;

    /**
     * Location of the VPS
     */
    #[DTA\Data(field: "vps_location", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $vps_location = null;

    /**
     * Last update date
     */
    #[DTA\Data(field: "vps_last_update", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $vps_last_update = null;

    /**
     * RAID building status
     */
    #[DTA\Data(field: "vps_raid_building", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $vps_raid_building = null;

    /**
     * Kernel version
     */
    #[DTA\Data(field: "vps_kernel", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $vps_kernel = null;

    /**
     * Available
     */
    #[DTA\Data(field: "vps_available", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $vps_available = null;

    /**
     * Number of CPU cores
     */
    #[DTA\Data(field: "vps_cores", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $vps_cores = null;

    /**
     * I/O wait
     */
    #[DTA\Data(field: "vps_iowait", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $vps_iowait = null;

    /**
     * RAID status
     */
    #[DTA\Data(field: "vps_raid_status", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $vps_raid_status = null;

    /**
     * Mounts
     */
    #[DTA\Data(field: "vps_mounts", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $vps_mounts = null;

    /**
     * Maximum number of servers
     */
    #[DTA\Data(field: "vps_server_max", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $vps_server_max = null;

    /**
     * Maximum number of server slices
     */
    #[DTA\Data(field: "vps_server_max_slices", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $vps_server_max_slices = null;

    /**
     * Drive type
     */
    #[DTA\Data(field: "vps_drive_type", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $vps_drive_type = null;

    /**
     * Order number
     */
    #[DTA\Data(field: "vps_order", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $vps_order = null;

}
