(ns inter-server-management-api.specs.login-service-counts
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def login-service-counts-data
  {
   (ds/req :vps) int?
   (ds/req :websites) int?
   (ds/req :servers) int?
   })

(def login-service-counts-spec
  (ds/spec
    {:name ::login-service-counts
     :spec login-service-counts-data}))
