<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * A supplementary information table for a mail service (e.g., connection details).
 */
class MailExtraInfoTable
{
    /**
     * The title of the extra info table.
     */
    #[DTA\Data(field: "title", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $title = null;

    /**
     * The rows of the extra info table.
     */
    #[DTA\Data(field: "rows", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\Collection56::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\Collection56::class])]
    public \App\DTO\Collection56|null $rows = null;

}
