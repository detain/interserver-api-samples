<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Object containing asset information.
 */
class ServerNetworkInfoAssets
{
    #[DTA\Data(field: "3497")]
    #[DTA\Strategy("Object", ["type" => \App\DTO\ServerAsset::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\ServerAsset::class])]
    public \App\DTO\ServerAsset|null $_3497 = null;

}
