<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Order counts per module.
 */
class LoginServiceCounts
{
    /**
     * The number of total VPS orders that have been placed in our billing system.
     */
    #[DTA\Data(field: "vps")]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $vps = null;

    /**
     * The number of total website orders that have been placed in our billing system.
     */
    #[DTA\Data(field: "websites")]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $websites = null;

    /**
     * The number of total server orders that have been placed in our billing system.
     */
    #[DTA\Data(field: "servers")]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $servers = null;

}
