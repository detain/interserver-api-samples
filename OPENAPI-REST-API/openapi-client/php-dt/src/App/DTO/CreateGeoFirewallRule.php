<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Create firewall rule for your ip
 */
class CreateGeoFirewallRule
{
    /**
     * 1 &#x3D; Block,  0 &#x3D; Whitelist
     */
    #[DTA\Data(field: "xdp_action")]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $xdp_action = null;

    #[DTA\Data(field: "destination_port", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $destination_port = null;

    /**
     * To get country code refer our countries api - https://my.interserver.net/apiv2/account/countries?fetch_by&#x3D;numcode
     */
    #[DTA\Data(field: "country_code", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $country_code = null;

    /**
     * ASN number
     */
    #[DTA\Data(field: "asn", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $asn = null;

}
