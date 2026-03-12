<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Object containing switchport information.
 */
class ServerNetworkInfoSwitchports
{
    #[DTA\Data(field: "10414")]
    #[DTA\Strategy("Object", ["type" => \App\DTO\ServerSwitchport::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\ServerSwitchport::class])]
    public \App\DTO\ServerSwitchport|null $_10414 = null;

}
