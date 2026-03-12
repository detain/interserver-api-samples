(ns inter-server-management-api.specs.login-submission-example-g-recaptcha-response-dep
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def login-submission-example-g-recaptcha-response-dep-data
  {
   (ds/opt :w) int?
   (ds/opt :n) int?
   })

(def login-submission-example-g-recaptcha-response-dep-spec
  (ds/spec
    {:name ::login-submission-example-g-recaptcha-response-dep
     :spec login-submission-example-g-recaptcha-response-dep-data}))
