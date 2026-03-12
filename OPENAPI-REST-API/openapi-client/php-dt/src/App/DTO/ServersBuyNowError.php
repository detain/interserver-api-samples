<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Error response when a buy-it-now server order fails validation.
 */
class ServersBuyNowError
{
    /**
     * Always false for error responses.
     */
    #[DTA\Data(field: "success", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "bool"])]
    public bool|null $success = null;

    /**
     * Human-readable error summary.
     */
    #[DTA\Data(field: "text", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $text = null;

    /**
     * List of specific validation error messages.
     */
    #[DTA\Data(field: "errors", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\Collection154::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\Collection154::class])]
    public \App\DTO\Collection154|null $errors = null;

}
