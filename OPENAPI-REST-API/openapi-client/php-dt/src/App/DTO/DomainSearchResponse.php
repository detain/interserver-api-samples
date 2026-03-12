<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Lookup and suggestion results returned for a domain search.
 */
class DomainSearchResponse
{
    /**
     * Indicates whether the registrar search succeeded.
     */
    #[DTA\Data(field: "success", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "bool"])]
    public bool|null $success = null;

    /**
     * Human-readable status text from the registrar.
     */
    #[DTA\Data(field: "response_text", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $response_text = null;

    /**
     * Response time as reported by the registrar.
     */
    #[DTA\Data(field: "response_time", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $response_time = null;

    /**
     * Availability lookup results for queried domains.
     */
    #[DTA\Data(field: "lookup", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\Collection27::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\Collection27::class])]
    public \App\DTO\Collection27|null $lookup = null;

    /**
     * Suggested alternative domains and availability data.
     */
    #[DTA\Data(field: "suggest", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\Collection28::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\Collection28::class])]
    public \App\DTO\Collection28|null $suggest = null;

    /**
     * TLDs evaluated during the search.
     */
    #[DTA\Data(field: "tlds", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\Collection29::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\Collection29::class])]
    public \App\DTO\Collection29|null $tlds = null;

}
