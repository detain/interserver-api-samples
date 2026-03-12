<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Core service record for a QuickServer including ID, status, IP, OS, and billing details.
 */
class QuickserverServiceInfo
{
    /**
     * Quickserver ID
     */
    #[DTA\Data(field: "qs_id", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $qs_id = null;

    /**
     * Customer ID
     */
    #[DTA\Data(field: "qs_custid", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $qs_custid = null;

    /**
     * Server information
     */
    #[DTA\Data(field: "qs_server", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $qs_server = null;

    /**
     * IP address
     */
    #[DTA\Data(field: "qs_ip", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $qs_ip = null;

    /**
     * IPv6 address (null)
     */
    #[DTA\Data(field: "qs_ipv6", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "mixed"])]
    public mixed|null $qs_ipv6 = null;

    /**
     * VZ ID
     */
    #[DTA\Data(field: "qs_vzid", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $qs_vzid = null;

    /**
     * Currency
     */
    #[DTA\Data(field: "qs_currency", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $qs_currency = null;

    /**
     * Type
     */
    #[DTA\Data(field: "qs_type", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $qs_type = null;

    /**
     * Order date
     */
    #[DTA\Data(field: "qs_order_date", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $qs_order_date = null;

    /**
     * Status
     */
    #[DTA\Data(field: "qs_status", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $qs_status = null;

    /**
     * Invoice number
     */
    #[DTA\Data(field: "qs_invoice", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $qs_invoice = null;

    /**
     * Coupon information
     */
    #[DTA\Data(field: "qs_coupon", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $qs_coupon = null;

    /**
     * Extra information
     */
    #[DTA\Data(field: "qs_extra", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $qs_extra = null;

    /**
     * Hostname
     */
    #[DTA\Data(field: "qs_hostname", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $qs_hostname = null;

    /**
     * Server status
     */
    #[DTA\Data(field: "qs_server_status", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $qs_server_status = null;

    /**
     * Comment
     */
    #[DTA\Data(field: "qs_comment", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $qs_comment = null;

    /**
     * Slices information
     */
    #[DTA\Data(field: "qs_slices", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $qs_slices = null;

    /**
     * VNC information
     */
    #[DTA\Data(field: "qs_vnc", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $qs_vnc = null;

    /**
     * VNC port (null)
     */
    #[DTA\Data(field: "qs_vnc_port", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "mixed"])]
    public mixed|null $qs_vnc_port = null;

    /**
     * Root password
     */
    #[DTA\Data(field: "qs_rootpass", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $qs_rootpass = null;

    /**
     * MAC address
     */
    #[DTA\Data(field: "qs_mac", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $qs_mac = null;

    /**
     * Operating system
     */
    #[DTA\Data(field: "qs_os", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $qs_os = null;

    /**
     * OS version
     */
    #[DTA\Data(field: "qs_version", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $qs_version = null;

    /**
     * Location
     */
    #[DTA\Data(field: "qs_location", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $qs_location = null;

    /**
     * Platform (null)
     */
    #[DTA\Data(field: "qs_platform", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "mixed"])]
    public mixed|null $qs_platform = null;

}
