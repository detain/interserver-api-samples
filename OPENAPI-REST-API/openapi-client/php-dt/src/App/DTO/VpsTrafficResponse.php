<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * VPS Traffic Information
 */
class VpsTrafficResponse
{
    #[DTA\Data(field: "name")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $name = null;

    #[DTA\Data(field: "target")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $target = null;

    #[DTA\Data(field: "interval")]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $interval = null;

    #[DTA\Data(field: "history")]
    #[DTA\Strategy("Object", ["type" => \App\DTO\VpsTrafficHistoryResponse::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\VpsTrafficHistoryResponse::class])]
    public \App\DTO\VpsTrafficHistoryResponse|null $history = null;

    #[DTA\Data(field: "last")]
    #[DTA\Strategy("DateTime")]
    #[DTA\Validator("DateTime")]
    public \DateTimeInterface|null $last = null;

    #[DTA\Data(field: "times")]
    #[DTA\Strategy("Object", ["type" => \App\DTO\Collection125::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\Collection125::class])]
    public \App\DTO\Collection125|null $times = null;

    #[DTA\Data(field: "totals")]
    #[DTA\Strategy("Object", ["type" => \App\DTO\VpsTrafficTotalsResposne::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\VpsTrafficTotalsResposne::class])]
    public \App\DTO\VpsTrafficTotalsResposne|null $totals = null;

    #[DTA\Data(field: "usage")]
    #[DTA\Strategy("Object", ["type" => \App\DTO\VpsTrafficUsageResponse::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\VpsTrafficUsageResponse::class])]
    public \App\DTO\VpsTrafficUsageResponse|null $usage = null;

    #[DTA\Data(field: "data")]
    #[DTA\Strategy("Object", ["type" => \App\DTO\Collection128::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\Collection128::class])]
    public \App\DTO\Collection128|null $data = null;

}
