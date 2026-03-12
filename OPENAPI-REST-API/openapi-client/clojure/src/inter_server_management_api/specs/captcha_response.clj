(ns inter-server-management-api.specs.captcha-response
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def captcha-response-data
  {
   (ds/req :captcha) string?
   })

(def captcha-response-spec
  (ds/spec
    {:name ::captcha-response
     :spec captcha-response-data}))
