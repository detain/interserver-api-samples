<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Information about the host node running this QuickServer, including hardware specs and resource utilization.
 */
class QuickserverServiceMaster
{
    /**
     * Quickserver ID
     */
    #[DTA\Data(field: "qs_id", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $qs_id = null;

    /**
     * Quickserver name
     */
    #[DTA\Data(field: "qs_name", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $qs_name = null;

    /**
     * IP address
     */
    #[DTA\Data(field: "qs_ip", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $qs_ip = null;

    /**
     * Type
     */
    #[DTA\Data(field: "qs_type", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $qs_type = null;

    /**
     * HDD size
     */
    #[DTA\Data(field: "qs_hdsize", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $qs_hdsize = null;

    /**
     * Free HDD space
     */
    #[DTA\Data(field: "qs_hdfree", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $qs_hdfree = null;

    /**
     * Bits
     */
    #[DTA\Data(field: "qs_bits", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $qs_bits = null;

    /**
     * Load
     */
    #[DTA\Data(field: "qs_load", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $qs_load = null;

    /**
     * RAM information
     */
    #[DTA\Data(field: "qs_ram", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $qs_ram = null;

    /**
     * CPU model
     */
    #[DTA\Data(field: "qs_cpu_model", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $qs_cpu_model = null;

    /**
     * CPU frequency
     */
    #[DTA\Data(field: "qs_cpu_mhz", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $qs_cpu_mhz = null;

    /**
     * Location
     */
    #[DTA\Data(field: "qs_location", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $qs_location = null;

    /**
     * Available information
     */
    #[DTA\Data(field: "qs_available", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $qs_available = null;

    /**
     * Cost
     */
    #[DTA\Data(field: "qs_cost", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $qs_cost = null;

    /**
     * Last update date
     */
    #[DTA\Data(field: "qs_last_update", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $qs_last_update = null;

    /**
     * Number of cores
     */
    #[DTA\Data(field: "qs_cores", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $qs_cores = null;

    /**
     * I/O wait
     */
    #[DTA\Data(field: "qs_iowait", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $qs_iowait = null;

    /**
     * RAID status
     */
    #[DTA\Data(field: "qs_raid_status", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $qs_raid_status = null;

    /**
     * Drive type
     */
    #[DTA\Data(field: "qs_drive_type", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $qs_drive_type = null;

    /**
     * Order number
     */
    #[DTA\Data(field: "qs_order", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $qs_order = null;

    /**
     * RAID building information
     */
    #[DTA\Data(field: "qs_raid_building", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $qs_raid_building = null;

    /**
     * Kernel version
     */
    #[DTA\Data(field: "qs_kernel", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $qs_kernel = null;

    /**
     * IOPing information
     */
    #[DTA\Data(field: "qs_ioping", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $qs_ioping = null;

    /**
     * Speed information
     */
    #[DTA\Data(field: "qs_speed", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $qs_speed = null;

    /**
     * Distribution name
     */
    #[DTA\Data(field: "qs_distro", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $qs_distro = null;

    /**
     * Distribution version
     */
    #[DTA\Data(field: "qs_distro_version", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $qs_distro_version = null;

    /**
     * Bytes/sec in
     */
    #[DTA\Data(field: "qs_bytes_sec_in", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $qs_bytes_sec_in = null;

    /**
     * Bytes/sec out
     */
    #[DTA\Data(field: "qs_bytes_sec_out", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $qs_bytes_sec_out = null;

    /**
     * Packets/sec in
     */
    #[DTA\Data(field: "qs_packets_sec_in", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $qs_packets_sec_in = null;

    /**
     * Packets/sec out
     */
    #[DTA\Data(field: "qs_packets_sec_out", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $qs_packets_sec_out = null;

    /**
     * Last install time (null)
     */
    #[DTA\Data(field: "qs_last_install_time", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "mixed"])]
    public mixed|null $qs_last_install_time = null;

    /**
     * Partitions information (null)
     */
    #[DTA\Data(field: "qs_partitions", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "mixed"])]
    public mixed|null $qs_partitions = null;

    /**
     * CPU flags
     */
    #[DTA\Data(field: "qs_cpu_flags", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $qs_cpu_flags = null;

}
