(ns inter-server-management-api.specs.domain-nameserver-get-response
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def domain-nameserver-get-response-data
  {
   })

(def domain-nameserver-get-response-spec
  (ds/spec
    {:name ::domain-nameserver-get-response
     :spec domain-nameserver-get-response-data}))
