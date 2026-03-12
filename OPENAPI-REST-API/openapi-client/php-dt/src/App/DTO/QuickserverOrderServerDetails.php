<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Server details.
 */
class QuickserverOrderServerDetails
{
    #[DTA\Data(field: "381", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\QuickserverOrderServerDetails381::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\QuickserverOrderServerDetails381::class])]
    public \App\DTO\QuickserverOrderServerDetails381|null $_381 = null;

}
