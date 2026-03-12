<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

#[DTA\Strategy("ScalarMap", ["type" => "mixed"])]
#[DTA\Validator("Collection", ["validators" => [
    ["name" => "Scalar", "options" => ["type" => "mixed"]]
]])]
class Collection78 extends \ArrayObject
{
}
