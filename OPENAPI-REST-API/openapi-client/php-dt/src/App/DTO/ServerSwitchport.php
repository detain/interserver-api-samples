<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

class ServerSwitchport
{
    /**
     * Unique identifier for the switchport.
     */
    #[DTA\Data(field: "switchport_id")]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $switchport_id = null;

    /**
     * Unique identifier for the switch associated with the switchport.
     */
    #[DTA\Data(field: "switch_id")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $switch_id = null;

    /**
     * Name of the switch associated with the switchport.
     */
    #[DTA\Data(field: "switch")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $switch = null;

    /**
     * Port name on the switch.
     */
    #[DTA\Data(field: "port")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $port = null;

    /**
     * Blade name associated with the port.
     */
    #[DTA\Data(field: "blade")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $blade = null;

    /**
     * Port identifier.
     */
    #[DTA\Data(field: "justport")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $justport = null;

    /**
     * Identifier for the graph associated with the switchport.
     */
    #[DTA\Data(field: "graph_id")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $graph_id = null;

    /**
     * Unique identifier of the asset associated with the switchport.
     */
    #[DTA\Data(field: "asset_id")]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $asset_id = null;

    /**
     * List of VLANs associated with the switchport.
     */
    #[DTA\Data(field: "vlans", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\Collection102::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\Collection102::class])]
    public \App\DTO\Collection102|null $vlans = null;

    /**
     * List of IPv6 VLANs associated with the switchport.
     */
    #[DTA\Data(field: "vlans6", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\Collection103::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\Collection103::class])]
    public \App\DTO\Collection103|null $vlans6 = null;

}
