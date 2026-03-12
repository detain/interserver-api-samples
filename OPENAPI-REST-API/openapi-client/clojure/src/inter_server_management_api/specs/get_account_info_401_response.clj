(ns inter-server-management-api.specs.get-account-info-401-response
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def get-account-info-401-response-data
  {
   (ds/req :code) int?
   (ds/req :message) string?
   })

(def get-account-info-401-response-spec
  (ds/spec
    {:name ::get-account-info-401-response
     :spec get-account-info-401-response-data}))
