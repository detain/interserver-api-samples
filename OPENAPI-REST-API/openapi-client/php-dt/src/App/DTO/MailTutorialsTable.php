<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * A table of tutorial links displayed for a mail service.
 */
class MailTutorialsTable
{
    /**
     * The title of the tutorials table.
     */
    #[DTA\Data(field: "title", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $title = null;

    /**
     * The rows of the tutorials table.
     */
    #[DTA\Data(field: "rows", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\Collection57::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\Collection57::class])]
    public \App\DTO\Collection57|null $rows = null;

}
