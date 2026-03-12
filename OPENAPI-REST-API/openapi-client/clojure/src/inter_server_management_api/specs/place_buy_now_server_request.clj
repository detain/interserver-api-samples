(ns inter-server-management-api.specs.place-buy-now-server-request
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def place-buy-now-server-request-data
  {
   (ds/opt :server_id) float?
   (ds/opt :server_hostname) string?
   (ds/opt :server_root_password) string?
   })

(def place-buy-now-server-request-spec
  (ds/spec
    {:name ::place-buy-now-server-request
     :spec place-buy-now-server-request-data}))
