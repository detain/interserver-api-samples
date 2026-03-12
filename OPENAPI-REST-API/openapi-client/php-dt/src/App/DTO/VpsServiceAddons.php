<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Add-on services and IP address information for a VPS, including control panel licenses and extra IP assignments.
 */
class VpsServiceAddons
{
    /**
     * Whether a cPanel license is active on this VPS.
     */
    #[DTA\Data(field: "has_cpanel", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "bool"])]
    public bool|null $has_cpanel = null;

    /**
     * Whether a DirectAdmin license is active on this VPS.
     */
    #[DTA\Data(field: "has_directadmin", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "bool"])]
    public bool|null $has_directadmin = null;

    /**
     * Whether a Fantastico license is active on this VPS.
     */
    #[DTA\Data(field: "has_fantastico", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "bool"])]
    public bool|null $has_fantastico = null;

    /**
     * Whether a Softaculous license is active on this VPS.
     */
    #[DTA\Data(field: "has_softaculous", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "bool"])]
    public bool|null $has_softaculous = null;

    /**
     * Whether extra disk space has been added to this VPS.
     */
    #[DTA\Data(field: "has_hdspace", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "bool"])]
    public bool|null $has_hdspace = null;

    /**
     * Whether a dedicated IP address is assigned to this VPS.
     */
    #[DTA\Data(field: "dedicated_ip", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "bool"])]
    public bool|null $dedicated_ip = null;

    /**
     * List of additional IPv4 addresses assigned to this VPS.
     */
    #[DTA\Data(field: "extra_ips", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\Collection114::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\Collection114::class])]
    public \App\DTO\Collection114|null $extra_ips = null;

    /**
     * List of additional IPv6 addresses assigned to this VPS.
     */
    #[DTA\Data(field: "extra_ips6", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\Collection115::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\Collection115::class])]
    public \App\DTO\Collection115|null $extra_ips6 = null;

    /**
     * List of IP addresses that have unpaid charges.
     */
    #[DTA\Data(field: "unpaid_ips", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\Collection116::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\Collection116::class])]
    public \App\DTO\Collection116|null $unpaid_ips = null;

    /**
     * All IPv4 addresses assigned to this VPS.
     */
    #[DTA\Data(field: "ips", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\Collection117::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\Collection117::class])]
    public \App\DTO\Collection117|null $ips = null;

    /**
     * All IPv6 addresses assigned to this VPS.
     */
    #[DTA\Data(field: "ips6", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\Collection118::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\Collection118::class])]
    public \App\DTO\Collection118|null $ips6 = null;

    /**
     * The add-on service ID for the cPanel license.
     */
    #[DTA\Data(field: "cpanel_id", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $cpanel_id = null;

    /**
     * Total monthly add-on cost in cents.
     */
    #[DTA\Data(field: "cost", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $cost = null;

    /**
     * List of add-on service IDs active on this VPS.
     */
    #[DTA\Data(field: "ids", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\Collection119::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\Collection119::class])]
    public \App\DTO\Collection119|null $ids = null;

    /**
     * Raw add-on data entries.
     */
    #[DTA\Data(field: "rdata", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\Collection120::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\Collection120::class])]
    public \App\DTO\Collection120|null $rdata = null;

}
