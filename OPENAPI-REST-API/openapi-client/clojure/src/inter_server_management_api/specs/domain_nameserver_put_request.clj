(ns inter-server-management-api.specs.domain-nameserver-put-request
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def domain-nameserver-put-request-data
  {
   (ds/req :nameserver) (s/coll-of string?)
   })

(def domain-nameserver-put-request-spec
  (ds/spec
    {:name ::domain-nameserver-put-request
     :spec domain-nameserver-put-request-data}))
