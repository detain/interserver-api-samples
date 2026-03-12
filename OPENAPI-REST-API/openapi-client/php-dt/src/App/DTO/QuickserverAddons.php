<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

class QuickserverAddons
{
    /**
     * Table title
     */
    #[DTA\Data(field: "title", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $title = null;

    #[DTA\Data(field: "rows", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\Collection73::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\Collection73::class])]
    public \App\DTO\Collection73|null $rows = null;

}
