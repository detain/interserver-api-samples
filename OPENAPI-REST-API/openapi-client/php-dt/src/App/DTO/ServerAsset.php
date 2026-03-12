<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

class ServerAsset
{
    /**
     * Unique identifier for the asset.
     */
    #[DTA\Data(field: "id")]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $id = null;

    /**
     * Order identifier for the asset.
     */
    #[DTA\Data(field: "order_id")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $order_id = null;

    /**
     * Hostname associated with the asset.
     */
    #[DTA\Data(field: "hostname")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $hostname = null;

    /**
     * Status of the asset.
     */
    #[DTA\Data(field: "status")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $status = null;

    /**
     * Primary IPv4 address of the asset.
     */
    #[DTA\Data(field: "primary_ipv4")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $primary_ipv4 = null;

    /**
     * Primary IPv6 address of the asset.
     */
    #[DTA\Data(field: "primary_ipv6")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $primary_ipv6 = null;

    /**
     * Datacenter identifier for the asset.
     */
    #[DTA\Data(field: "datacenter")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $datacenter = null;

    /**
     * Type identifier for the asset.
     */
    #[DTA\Data(field: "type_id")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $type_id = null;

    /**
     * Asset tag associated with the asset.
     */
    #[DTA\Data(field: "asset_tag")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $asset_tag = null;

    /**
     * Rack identifier for the asset.
     */
    #[DTA\Data(field: "rack")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $rack = null;

    /**
     * Row identifier for the asset.
     */
    #[DTA\Data(field: "row")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $row = null;

    /**
     * Column identifier for the asset.
     */
    #[DTA\Data(field: "col")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $col = null;

    /**
     * Starting unit identifier for the asset.
     */
    #[DTA\Data(field: "unit_start")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $unit_start = null;

    /**
     * Ending unit identifier for the asset.
     */
    #[DTA\Data(field: "unit_end")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $unit_end = null;

    /**
     * Subunit identifier for the asset.
     */
    #[DTA\Data(field: "unit_sub")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $unit_sub = null;

    /**
     * IPMI MAC address associated with the asset.
     */
    #[DTA\Data(field: "ipmi_mac")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $ipmi_mac = null;

    /**
     * IPMI IP address associated with the asset.
     */
    #[DTA\Data(field: "ipmi_ip")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $ipmi_ip = null;

    /**
     * IPMI working status associated with the asset.
     */
    #[DTA\Data(field: "ipmi_working")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $ipmi_working = null;

    /**
     * Company associated with the asset.
     */
    #[DTA\Data(field: "company")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $company = null;

    /**
     * Comments associated with the asset.
     */
    #[DTA\Data(field: "comments")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $comments = null;

    /**
     * Make of the asset.
     */
    #[DTA\Data(field: "make")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $make = null;

    /**
     * Model of the asset.
     */
    #[DTA\Data(field: "model")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $model = null;

    /**
     * Description of the asset.
     */
    #[DTA\Data(field: "description")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $description = null;

    /**
     * Customer identifier for the asset.
     */
    #[DTA\Data(field: "customer_id")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $customer_id = null;

    /**
     * External identifier for the asset.
     */
    #[DTA\Data(field: "external_id")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $external_id = null;

    /**
     * Billing status of the asset.
     */
    #[DTA\Data(field: "billing_status")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $billing_status = null;

    /**
     * Overdue status of the asset.
     */
    #[DTA\Data(field: "overdue")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $overdue = null;

    /**
     * Asset identifier for the asset.
     */
    #[DTA\Data(field: "asset_id")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $asset_id = null;

    /**
     * Name of the asset.
     */
    #[DTA\Data(field: "asset_name")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $asset_name = null;

    /**
     * Rack identifier for the asset.
     */
    #[DTA\Data(field: "rack_id")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $rack_id = null;

    /**
     * Rack name associated with the asset.
     */
    #[DTA\Data(field: "rack_name")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $rack_name = null;

    /**
     * Location of the rack associated with the asset.
     */
    #[DTA\Data(field: "rack_location")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $rack_location = null;

    /**
     * Size of the rack associated with the asset.
     */
    #[DTA\Data(field: "rack_size")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $rack_size = null;

    /**
     * X-coordinate of the asset within the rack.
     */
    #[DTA\Data(field: "rack_x")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $rack_x = null;

    /**
     * Y-coordinate of the asset within the rack.
     */
    #[DTA\Data(field: "rack_y")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $rack_y = null;

    /**
     * List of switchports associated with the asset.
     */
    #[DTA\Data(field: "switchports")]
    #[DTA\Strategy("Object", ["type" => \App\DTO\Collection99::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\Collection99::class])]
    public \App\DTO\Collection99|null $switchports = null;

    /**
     * List of VLANs associated with the asset.
     */
    #[DTA\Data(field: "vlans")]
    #[DTA\Strategy("Object", ["type" => \App\DTO\Collection100::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\Collection100::class])]
    public \App\DTO\Collection100|null $vlans = null;

    /**
     * List of IPv6 VLANs associated with the asset.
     */
    #[DTA\Data(field: "vlans6")]
    #[DTA\Strategy("Object", ["type" => \App\DTO\Collection101::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\Collection101::class])]
    public \App\DTO\Collection101|null $vlans6 = null;

    #[DTA\Data(field: "lease")]
    #[DTA\Strategy("Object", ["type" => \App\DTO\ServerLease::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\ServerLease::class])]
    public \App\DTO\ServerLease|null $lease = null;

    /**
     * MAC address associated with the asset.
     */
    #[DTA\Data(field: "mac", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "mixed"])]
    public mixed|null $mac = null;

    /**
     * IPMI admin username associated with the asset.
     */
    #[DTA\Data(field: "ipmi_admin_username", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "mixed"])]
    public mixed|null $ipmi_admin_username = null;

    /**
     * IPMI admin password associated with the asset.
     */
    #[DTA\Data(field: "ipmi_admin_password", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "mixed"])]
    public mixed|null $ipmi_admin_password = null;

    /**
     * IPMI client username associated with the asset.
     */
    #[DTA\Data(field: "ipmi_client_username", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "mixed"])]
    public mixed|null $ipmi_client_username = null;

    /**
     * IPMI client password associated with the asset.
     */
    #[DTA\Data(field: "ipmi_client_password", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "mixed"])]
    public mixed|null $ipmi_client_password = null;

    /**
     * IPMI update status associated with the asset.
     */
    #[DTA\Data(field: "ipmi_updated", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "mixed"])]
    public mixed|null $ipmi_updated = null;

    /**
     * Timestamp of asset creation.
     */
    #[DTA\Data(field: "create_timestamp", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "mixed"])]
    public mixed|null $create_timestamp = null;

    /**
     * Timestamp of asset update.
     */
    #[DTA\Data(field: "update_timestamp", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "mixed"])]
    public mixed|null $update_timestamp = null;

    /**
     * Comment associated with the asset.
     */
    #[DTA\Data(field: "comment", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "mixed"])]
    public mixed|null $comment = null;

}
