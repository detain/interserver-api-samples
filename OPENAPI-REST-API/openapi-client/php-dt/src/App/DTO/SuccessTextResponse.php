<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Response with success flag and text description.
 */
class SuccessTextResponse
{
    /**
     * Indicates whether or not the command was successful or not.
     */
    #[DTA\Data(field: "success")]
    #[DTA\Validator("Scalar", ["type" => "bool"])]
    public bool|null $success = null;

    /**
     * Text associated with the response.
     */
    #[DTA\Data(field: "text", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $text = null;

    /**
     * Optional Action relating to the response.
     */
    #[DTA\Data(field: "action", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $action = null;

}
