<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

class ServerAssets
{
    /**
     * The title of the assets.
     */
    #[DTA\Data(field: "title", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $title = null;

    /**
     * The size of the assets.
     */
    #[DTA\Data(field: "size", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $size = null;

    /**
     * The type of the assets.
     */
    #[DTA\Data(field: "type", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $type = null;

    /**
     * The header of the assets table.
     */
    #[DTA\Data(field: "header", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\Collection104::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\Collection104::class])]
    public \App\DTO\Collection104|null $header = null;

    /**
     * The rows of the assets table.
     */
    #[DTA\Data(field: "rows", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\Collection106::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\Collection106::class])]
    public \App\DTO\Collection106|null $rows = null;

}
