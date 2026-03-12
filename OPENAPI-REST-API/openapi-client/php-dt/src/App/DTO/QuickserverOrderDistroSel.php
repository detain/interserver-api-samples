<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Distribution selection.
 */
class QuickserverOrderDistroSel
{
    #[DTA\Data(field: "Ubuntu", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\QuickserverOrderDistroSelUbuntu::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\QuickserverOrderDistroSelUbuntu::class])]
    public \App\DTO\QuickserverOrderDistroSelUbuntu|null $ubuntu = null;

}
