(ns inter-server-management-api.specs.domain-nameserver-post-request
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def domain-nameserver-post-request-data
  {
   (ds/req :name) string?
   (ds/req :ipAddress) string?
   })

(def domain-nameserver-post-request-spec
  (ds/spec
    {:name ::domain-nameserver-post-request
     :spec domain-nameserver-post-request-data}))
