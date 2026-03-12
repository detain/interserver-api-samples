<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

class ServerServiceInfo
{
    /**
     * The ID of the server.
     */
    #[DTA\Data(field: "server_id", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $server_id = null;

    /**
     * The hostname of the server.
     */
    #[DTA\Data(field: "server_hostname", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $server_hostname = null;

    /**
     * The customer ID associated with the server.
     */
    #[DTA\Data(field: "server_custid", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $server_custid = null;

    /**
     * The type of the server.
     */
    #[DTA\Data(field: "server_type", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $server_type = null;

    /**
     * The currency used for billing.
     */
    #[DTA\Data(field: "server_currency", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $server_currency = null;

    /**
     * The date when the server was ordered.
     */
    #[DTA\Data(field: "server_order_date", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $server_order_date = null;

    /**
     * The invoice number for the server.
     */
    #[DTA\Data(field: "server_invoice", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $server_invoice = null;

    /**
     * The coupon associated with the server.
     */
    #[DTA\Data(field: "server_coupon", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $server_coupon = null;

    /**
     * The status of the server.
     */
    #[DTA\Data(field: "server_status", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $server_status = null;

    /**
     * The root of the server.
     */
    #[DTA\Data(field: "server_root", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $server_root = null;

    /**
     * The dedicated tag of the server.
     */
    #[DTA\Data(field: "server_dedicated_tag", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $server_dedicated_tag = null;

    /**
     * The custom tag of the server.
     */
    #[DTA\Data(field: "server_custom_tag", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $server_custom_tag = null;

    /**
     * Comments related to the server.
     */
    #[DTA\Data(field: "server_comment", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $server_comment = null;

    /**
     * The initial billing amount for the server.
     */
    #[DTA\Data(field: "server_initial_bill", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $server_initial_bill = null;

    /**
     * The hardware information of the server.
     */
    #[DTA\Data(field: "server_hardware", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $server_hardware = null;

    /**
     * The number of IPs associated with the server.
     */
    #[DTA\Data(field: "server_ips", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $server_ips = null;

    /**
     * The monthly billing amount for the server.
     */
    #[DTA\Data(field: "server_monthly_bill", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $server_monthly_bill = null;

    /**
     * The setup status of the server.
     */
    #[DTA\Data(field: "server_setup", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $server_setup = null;

    /**
     * Discount information for the server.
     */
    #[DTA\Data(field: "server_discount", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "mixed"])]
    public mixed|null $server_discount = null;

    /**
     * The reputation of the server.
     */
    #[DTA\Data(field: "server_rep", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $server_rep = null;

    /**
     * The date related to the server.
     */
    #[DTA\Data(field: "server_date", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $server_date = null;

    /**
     * The total cost of the server.
     */
    #[DTA\Data(field: "server_total_cost", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $server_total_cost = null;

    /**
     * The location of the server.
     */
    #[DTA\Data(field: "server_location", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "mixed"])]
    public mixed|null $server_location = null;

    /**
     * The ordered hardware for the server.
     */
    #[DTA\Data(field: "server_hardware_ordered", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $server_hardware_ordered = null;

    /**
     * The billed amount for the server.
     */
    #[DTA\Data(field: "server_billed", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $server_billed = null;

    /**
     * Indicates whether a welcome email was sent.
     */
    #[DTA\Data(field: "server_welcome_email", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $server_welcome_email = null;

    /**
     * The number of dedicated CPUs for the server.
     */
    #[DTA\Data(field: "server_dedicated_cpu", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $server_dedicated_cpu = null;

    /**
     * The amount of dedicated memory for the server.
     */
    #[DTA\Data(field: "server_dedicated_memory", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $server_dedicated_memory = null;

    /**
     * The size of the first dedicated hard drive.
     */
    #[DTA\Data(field: "server_dedicated_hd1", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $server_dedicated_hd1 = null;

    /**
     * The size of the second dedicated hard drive.
     */
    #[DTA\Data(field: "server_dedicated_hd2", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "mixed"])]
    public mixed|null $server_dedicated_hd2 = null;

    /**
     * The bandwidth of the server.
     */
    #[DTA\Data(field: "server_dedicated_bandwidth", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $server_dedicated_bandwidth = null;

    /**
     * The number of dedicated IPs for the server.
     */
    #[DTA\Data(field: "server_dedicated_ips", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $server_dedicated_ips = null;

    /**
     * The operating system of the server.
     */
    #[DTA\Data(field: "server_dedicated_os", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $server_dedicated_os = null;

    /**
     * The control panel of the server.
     */
    #[DTA\Data(field: "server_dedicated_cp", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "mixed"])]
    public mixed|null $server_dedicated_cp = null;

    /**
     * The RAID configuration of the server.
     */
    #[DTA\Data(field: "server_dedicated_raid", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $server_dedicated_raid = null;

    /**
     * Additional information about the server.
     */
    #[DTA\Data(field: "server_extra", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $server_extra = null;

}
