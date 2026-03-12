<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Response after sending an action queue to a service.
 */
class QueueResponse
{
    /**
     * Response text
     */
    #[DTA\Data(field: "text")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $text = null;

    /**
     * The Queue ID attached to the action.
     */
    #[DTA\Data(field: "queueId")]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $queue_id = null;

}
