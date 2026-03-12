<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

class ServerNetworkInfo
{
    /**
     * List of VLANs.
     */
    #[DTA\Data(field: "vlans")]
    #[DTA\Strategy("Object", ["type" => \App\DTO\Collection97::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\Collection97::class])]
    public \App\DTO\Collection97|null $vlans = null;

    /**
     * List of IPv6 VLANs.
     */
    #[DTA\Data(field: "vlans6")]
    #[DTA\Strategy("Object", ["type" => \App\DTO\Collection98::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\Collection98::class])]
    public \App\DTO\Collection98|null $vlans6 = null;

    #[DTA\Data(field: "assets")]
    #[DTA\Strategy("Object", ["type" => \App\DTO\ServerNetworkInfoAssets::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\ServerNetworkInfoAssets::class])]
    public \App\DTO\ServerNetworkInfoAssets|null $assets = null;

    #[DTA\Data(field: "switchports")]
    #[DTA\Strategy("Object", ["type" => \App\DTO\ServerNetworkInfoSwitchports::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\ServerNetworkInfoSwitchports::class])]
    public \App\DTO\ServerNetworkInfoSwitchports|null $switchports = null;

}
