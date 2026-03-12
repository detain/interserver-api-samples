<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

class WebsiteTable
{
    /**
     * Title of the table
     */
    #[DTA\Data(field: "title", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $title = null;

    #[DTA\Data(field: "rows", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\Collection135::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\Collection135::class])]
    public \App\DTO\Collection135|null $rows = null;

}
