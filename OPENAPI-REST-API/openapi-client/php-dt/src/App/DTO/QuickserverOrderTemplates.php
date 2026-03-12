<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Templates details.
 */
class QuickserverOrderTemplates
{
    #[DTA\Data(field: "Ubuntu", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\QuickserverOrderTemplatesUbuntu64::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\QuickserverOrderTemplatesUbuntu64::class])]
    public \App\DTO\QuickserverOrderTemplatesUbuntu64|null $ubuntu = null;

}
