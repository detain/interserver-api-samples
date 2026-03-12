<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Version details.
 */
class QuickserverOrderVersion
{
    #[DTA\Data(field: "centosstream-8", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\QuickserverOrderVersionCentosstream8::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\QuickserverOrderVersionCentosstream8::class])]
    public \App\DTO\QuickserverOrderVersionCentosstream8|null $centosstream_8 = null;

}
