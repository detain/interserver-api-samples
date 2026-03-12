(ns inter-server-management-api.specs.domain-dnssec-request
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def domain-dnssec-request-data
  {
   (ds/opt :algorithm) (s/coll-of int?)
   (ds/opt :digest_type) (s/coll-of int?)
   (ds/opt :digest) (s/coll-of string?)
   (ds/opt :key_tag) (s/coll-of int?)
   })

(def domain-dnssec-request-spec
  (ds/spec
    {:name ::domain-dnssec-request
     :spec domain-dnssec-request-data}))
