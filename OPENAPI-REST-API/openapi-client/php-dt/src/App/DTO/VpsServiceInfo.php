<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

class VpsServiceInfo
{
    /**
     * VPS ID
     */
    #[DTA\Data(field: "vps_id", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $vps_id = null;

    /**
     * Customer ID
     */
    #[DTA\Data(field: "vps_custid", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $vps_custid = null;

    /**
     * Server ID
     */
    #[DTA\Data(field: "vps_server", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $vps_server = null;

    /**
     * IP address of the VPS
     */
    #[DTA\Data(field: "vps_ip", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $vps_ip = null;

    /**
     * IPv6 address of the VPS
     */
    #[DTA\Data(field: "vps_ipv6", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "mixed"])]
    public mixed|null $vps_ipv6 = null;

    /**
     * VPS Virtuozzo ID
     */
    #[DTA\Data(field: "vps_vzid", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $vps_vzid = null;

    /**
     * Currency used for billing
     */
    #[DTA\Data(field: "vps_currency", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $vps_currency = null;

    /**
     * VPS type
     */
    #[DTA\Data(field: "vps_type", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $vps_type = null;

    /**
     * Date of VPS order
     */
    #[DTA\Data(field: "vps_order_date", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $vps_order_date = null;

    /**
     * VPS status
     */
    #[DTA\Data(field: "vps_status", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $vps_status = null;

    /**
     * VPS invoice number
     */
    #[DTA\Data(field: "vps_invoice", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $vps_invoice = null;

    /**
     * VPS coupon code
     */
    #[DTA\Data(field: "vps_coupon", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $vps_coupon = null;

    /**
     * Additional information about the VPS
     */
    #[DTA\Data(field: "vps_extra", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $vps_extra = null;

    /**
     * VPS hostname
     */
    #[DTA\Data(field: "vps_hostname", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $vps_hostname = null;

    /**
     * Status of the VPS server
     */
    #[DTA\Data(field: "vps_server_status", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $vps_server_status = null;

    /**
     * Comment associated with the VPS
     */
    #[DTA\Data(field: "vps_comment", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $vps_comment = null;

    /**
     * Number of VPS slices
     */
    #[DTA\Data(field: "vps_slices", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $vps_slices = null;

    /**
     * VNC address
     */
    #[DTA\Data(field: "vps_vnc", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $vps_vnc = null;

    /**
     * VNC port
     */
    #[DTA\Data(field: "vps_vnc_port", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $vps_vnc_port = null;

    /**
     * Root password of the VPS
     */
    #[DTA\Data(field: "vps_rootpass", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $vps_rootpass = null;

    /**
     * MAC address of the VPS
     */
    #[DTA\Data(field: "vps_mac", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $vps_mac = null;

    /**
     * Operating system of the VPS
     */
    #[DTA\Data(field: "vps_os", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $vps_os = null;

    /**
     * Version of the operating system
     */
    #[DTA\Data(field: "vps_version", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $vps_version = null;

    /**
     * Location of the VPS
     */
    #[DTA\Data(field: "vps_location", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $vps_location = null;

    /**
     * Virtualization platform
     */
    #[DTA\Data(field: "vps_platform", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $vps_platform = null;

    /**
     * Amount of disk space used
     */
    #[DTA\Data(field: "vps_diskused", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $vps_diskused = null;

    /**
     * Maximum disk space available
     */
    #[DTA\Data(field: "vps_diskmax", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $vps_diskmax = null;

}
