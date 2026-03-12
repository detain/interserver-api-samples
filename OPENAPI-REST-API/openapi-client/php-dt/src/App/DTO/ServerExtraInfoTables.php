<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

class ServerExtraInfoTables
{
    #[DTA\Data(field: "assets")]
    #[DTA\Strategy("Object", ["type" => \App\DTO\ServerAssets::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\ServerAssets::class])]
    public \App\DTO\ServerAssets|null $assets = null;

}
