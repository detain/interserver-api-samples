<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Text Response Object
 */
class TextResponse
{
    /**
     * Response text
     */
    #[DTA\Data(field: "text", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $text = null;

    /**
     * Response message
     */
    #[DTA\Data(field: "message", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $message = null;

}
