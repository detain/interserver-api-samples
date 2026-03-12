<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

class PostWebsiteMigration200Response
{
    /**
     * Confirmation message.
     */
    #[DTA\Data(field: "text", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $text = null;

    /**
     * The support ticket ID created for tracking the migration. Use this with &#x60;/tickets/{id}&#x60; to check migration progress.
     */
    #[DTA\Data(field: "ticket", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $ticket = null;

}
